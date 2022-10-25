# ATTENTION NDIM is expected to be equal to 2,
# value is ecpected to be int

# Expects the executable called "main" to be in the same directory
# Needs the tool diff
# Will create a temporary file called 1expectedResult and 2myResult

# Expected result
echo "{0}
{1}
{0,0,0,0,0}
{1,2,3,4,5}
{1}
{1,2,3,4,5}
{0}
{4,7}
{900,919,938,957}
1480" > 1expectedResult

# Your solution
./main 2 1 testInit > 2myResult
./main 1 1 testAdd >> 2myResult
./main 2 2 testAdd >> 2myResult
./main 10 4 testAdd >> 2myResult
./main 4 3 scale 2 >> 2myResult

# Compare
rr=$(diff 1expectedResult 2myResult)

if [[ -z $rr ]]
then
    echo "Passed simple test"
else
    echo "Failed for one of"
    echo "./main 2 1 testInit > 2myResult
          ./main 1 1 testAdd >> 2myResult
          ./main 2 2 testAdd >> 2myResult
          ./main 10 4 testAdd >> 2myResult
          ./main 4 3 scale 2 >> 2myResult"
    echo "Diff is"
    echo $rr
fi

