
bash MakeClass.sh
root -l run_generate_indices.C exit.C

echo " ===================================================== "
echo " ============= indices.csv generated ================= "
echo " == To make further analysis analysis faster ========= "
echo " === # nubmer of events in indices.csv: ============== "
cat indices.csv  | wc -l
