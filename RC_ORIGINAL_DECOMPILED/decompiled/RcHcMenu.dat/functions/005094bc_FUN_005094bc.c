/*
 * FUN_005094bc at 005094bc
 * uint __register FUN_005094bc(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 005094bc-005095e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005094bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  double dVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  float10 in_ST0;
  short local_1e;
  ushort local_1c;
  short local_1a;
  int local_18;
  double local_14;
  uint local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  FUN_0040b090(&local_1a,&local_1c,&local_1e,param_4,param_5);
  uVar2 = FUN_0040aed8(CONCAT22(extraout_var,local_1a),1,1);
  local_14 = (double)in_ST0;
  local_18 = FUN_0040b0b0(uVar2,extraout_EDX,extraout_ECX,local_14._0_4_,
                          (int)((ulonglong)local_14 >> 0x20));
  if ((local_18 == 1) || (local_18 == 7)) {
    if (local_18 == 1) {
      uVar3 = FUN_00402b48();
      local_c = uVar3 + 1;
      iVar4 = extraout_EDX_00 + (uint)(0xfffffffe < uVar3);
      uVar2 = extraout_ECX_00;
      if (SCARRY4(extraout_EDX_00,(uint)(0xfffffffe < uVar3))) {
        local_c = thunk_FUN_00402874(local_c);
        uVar2 = extraout_ECX_01;
        iVar4 = extraout_EDX_01;
      }
      if ((int)local_c >> 0x1f != iVar4) {
        local_c = thunk_FUN_00402874(local_c);
        uVar2 = extraout_ECX_02;
        iVar4 = extraout_EDX_02;
      }
    }
    else {
      uVar3 = FUN_00402b48();
      local_c = uVar3 + 1;
      iVar4 = extraout_EDX_03 + (uint)(0xfffffffe < uVar3);
      uVar2 = extraout_ECX_03;
      if (SCARRY4(extraout_EDX_03,(uint)(0xfffffffe < uVar3))) {
        local_c = thunk_FUN_00402874(local_c);
        uVar2 = extraout_ECX_04;
        iVar4 = extraout_EDX_04;
      }
      if ((int)local_c >> 0x1f != iVar4) {
        local_c = thunk_FUN_00402874(local_c);
        uVar2 = extraout_ECX_05;
        iVar4 = extraout_EDX_05;
      }
    }
  }
  else {
    uVar3 = FUN_00402b48();
    local_c = uVar3 + 1;
    iVar4 = extraout_EDX_06 + (uint)(0xfffffffe < uVar3);
    uVar2 = extraout_ECX_06;
    if (SCARRY4(extraout_EDX_06,(uint)(0xfffffffe < uVar3))) {
      local_c = thunk_FUN_00402874(local_c);
      uVar2 = extraout_ECX_07;
      iVar4 = extraout_EDX_07;
    }
    if ((int)local_c >> 0x1f != iVar4) {
      local_c = thunk_FUN_00402874(local_c);
      uVar2 = extraout_ECX_08;
      iVar4 = extraout_EDX_08;
    }
  }
  if (((local_c == 0x34) || (local_c == 0x35)) &&
     (dVar1 = (double)CONCAT44(param_5,param_4) + 7.0,
     uVar3 = FUN_005094bc(local_8,iVar4,uVar2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20)),
     uVar3 == 2)) {
    local_c = 1;
  }
  return local_c;
}

