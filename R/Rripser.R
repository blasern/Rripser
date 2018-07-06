#' R interface to ripser
#' 
#' @docType package
#' @author nello.blaser@uib.no
#' @importFrom Rcpp sourceCpp
#' @useDynLib Rripser, .registration = TRUE
#' @name Rripser
NULL

#' Ripser
#' 
#' Run ripser 
#' 
#' @param dist_mat distance matrix
#' @param dim compute persistent homology up to this dimension 
#' @param threshold compute Rips complex up to this diameter
#' @examples
#' rcircle <- function(N, r = 1, sd = 0){
#' radius <- rnorm(N, r, sd)
#' angle <- runif(N, 0, 2*pi)
#' data.frame(x = radius * cos(angle), 
#'            y = radius * sin(angle))
#' }
#' dta <- rcircle(200, sd = 0.1)
#' pers <- ripser(dist(dta), dim = 2)
#' @export
ripser <- function(dist_mat, dim = 1, threshold = NA_real_){
  UseMethod('ripser')
}
#' @export
ripser.matrix <- function(dist_mat, dim = 1, threshold = NA_real_){
  stopifnot(all(dim(dist_mat) > 1))
  stopifnot(nrow(dist_mat) == ncol(dist_mat))
  ripser(stats::as.dist(dist_mat), dim = dim, threshold = threshold)
}
#' @export
ripser.dist <- function(dist_mat, dim = 1, threshold = NA_real_){
  stopifnot(length(dist_mat) > 0)
  run_ripser(dist_mat, dim = dim, threshold = threshold)
}