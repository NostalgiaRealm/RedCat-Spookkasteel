/*
 * FUN_004f1314 at 004f1314
 * undefined __register FUN_004f1314(int * param_1)
 * Address ranges: 004f1314-004f1364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f1314(int *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    iVar1 = FUN_00496d84(param_1[3]);
    if ((*(byte *)(iVar1 + 0x19) & 8) == 0) {
      if (*(short *)((int)param_1 + 0x32) == 0) {
        (**(code **)(*param_1 + 4))();
      }
      else {
        (*(code *)param_1[0xc])(param_1[0xd],param_1[2],param_1[3],1);
      }
    }
  }
  return;
}

