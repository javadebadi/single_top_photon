# the makeclass in IPM UI does not produce correct file
# it contains b_& instead of b_ for branches names
# it contains kMax& instead of kMax
# this bash file corrects these mistakes
root -l MakeClass.C exit.C
sed -i -e 's/b_&/b_/g' SmallClass.h
sed -i -e 's/kMax&/kMax/g' SmallClass.h
