/*
 * FUN_00435c00 at 00435c00
 * undefined __register FUN_00435c00(int * param_1)
 * Address ranges: 00435c00-00435c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435c00(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00432688((int)param_1);
  if (iVar1 < 1) {
    iVar1 = FUN_0040a380("");
    param_1[0x15] = iVar1;
  }
  else {
    piVar2 = FUN_0040a360(iVar1 + 1);
    param_1[0x15] = (int)piVar2;
    iVar1 = FUN_0040a374((int)piVar2);
    FUN_00432698((int)param_1,piVar2,iVar1);
  }
  FUN_004312f4();
  (**(code **)(*param_1 + 0x9c))();
  return;
}

