% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/basic-misc.R
\name{subset_by_colnames}
\alias{subset_by_colnames}
\title{Subset a 2D structure by a vector of column names.}
\usage{
subset_by_colnames(colnames, data)
}
\arguments{
\item{colnames}{a character vector}

\item{data}{a matrix or data frame}
}
\description{
Not all colnames are necessarily in the columns of data; in that case this
returns NA.
}
\keyword{internal}
