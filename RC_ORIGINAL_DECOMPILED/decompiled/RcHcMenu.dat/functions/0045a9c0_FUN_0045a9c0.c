/*
 * FUN_0045a9c0 at 0045a9c0
 * undefined __register FUN_0045a9c0(int param_1, uint param_2, int param_3)
 * Address ranges: 0045a9c0-0045aa33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045a9c0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_EDX;
  uint uVar4;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  
  if ((int)param_2 < 1) {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = param_2;
  if (param_3 < (int)param_2) {
    uVar1 = FUN_00403d94("Assertion failure");
  }
  iVar3 = param_3 - param_2;
  if (SBORROW4(param_3,param_2)) {
    uVar1 = thunk_FUN_00402874(uVar1);
    iVar3 = extraout_EDX;
  }
  uVar4 = iVar3 + 1;
  if (SCARRY4(iVar3,1)) {
    thunk_FUN_00402874(uVar1);
    uVar4 = extraout_EDX_00;
  }
  puVar2 = (undefined4 *)(param_1 + param_2);
  if (SCARRY4(param_1,param_2)) {
    puVar2 = (undefined4 *)thunk_FUN_00402874((uint)puVar2);
    uVar4 = extraout_EDX_01;
  }
  FUN_00402cfc(puVar2,uVar4,0);
  return;
}

