/*
 * FUN_0043213c at 0043213c
 * undefined __register FUN_0043213c(int * param_1, int * param_2)
 * Address ranges: 0043213c-0043215c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043213c(int *param_1,int *param_2)

{
  (**(code **)(*param_1 + 0x7c))
            (param_1,*param_2,param_2[1],param_2[3] - param_2[1],param_2[2] - *param_2);
  return;
}

