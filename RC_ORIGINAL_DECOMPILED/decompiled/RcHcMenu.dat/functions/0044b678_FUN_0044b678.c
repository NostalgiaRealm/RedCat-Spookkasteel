/*
 * FUN_0044b678 at 0044b678
 * undefined __register FUN_0044b678(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 0044b678-0044b69e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b678(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != param_1[0x90]) {
    param_1[0x90] = param_2;
    if (param_2 != 0) {
      FUN_00418fe0(param_2,(int)param_1,param_3);
    }
    FUN_0044b5d8(param_1);
  }
  return;
}

