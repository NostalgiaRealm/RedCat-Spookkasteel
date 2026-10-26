/*
 * FUN_00546ab0 at 00546ab0
 * undefined __register FUN_00546ab0(int * param_1)
 * Address ranges: 00546ab0-00546b04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00546ab0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = param_1 + 0x23;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  if ((char)param_1[0x10] == '\0') {
    FUN_00546a5c();
  }
  else if ((char)param_1[0x10] == '\x01') {
    FUN_00546a7c();
  }
  uVar3 = FUN_00549b80((int)param_1);
  (**(code **)(*param_1 + 0x2c))(param_1,uVar3,0);
  return;
}

