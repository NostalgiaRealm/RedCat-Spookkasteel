/*
 * FUN_00491eac at 00491eac
 * undefined1 __register FUN_00491eac(int param_1, byte * param_2)
 * Address ranges: 00491eac-00491f24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00491eac(int param_1,byte *param_2)

{
  short sVar1;
  undefined2 extraout_var;
  int iVar2;
  undefined2 extraout_var_00;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  int extraout_EDX_01;
  uint uVar6;
  uint extraout_EDX_02;
  undefined1 local_d;
  
  local_d = 0;
  sVar1 = FUN_0048df50(param_2);
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (SCARRY4((int)sVar1,1)) {
    thunk_FUN_00402874(CONCAT22(extraout_var,sVar1));
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  iVar2 = FUN_00491e30(param_1,uVar5,uVar4);
  iVar2 = FUN_0048ec24(iVar2);
  if (sVar1 + 1 < iVar2) {
    sVar1 = FUN_0048dea8(param_2);
    uVar3 = CONCAT22(extraout_var_00,sVar1);
    iVar2 = sVar1 + 1;
    if (SCARRY4((int)sVar1,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
      iVar2 = extraout_EDX_01;
    }
    uVar6 = iVar2 + 0x8000;
    if (0xffff < uVar6) {
      thunk_FUN_00402874(uVar3);
      uVar6 = extraout_EDX_02;
    }
    FUN_0048de00(param_2,(short)uVar6 + -0x8000);
    local_d = 1;
  }
  return local_d;
}

