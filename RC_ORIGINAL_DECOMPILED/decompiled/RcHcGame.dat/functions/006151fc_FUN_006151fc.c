/*
 * FUN_006151fc at 006151fc
 * undefined FUN_006151fc(void)
 * Address ranges: 006151fc-00615262
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_006151fc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_1;
  FUN_00614df0(param_1);
  iVar1 = FUN_0061503c();
  if (iVar1 == 0) {
    iVar1 = FUN_0061503c();
    if (iVar1 == 0) {
      FUN_00615373(param_3);
    }
    else {
      FUN_006153d7((*(int *)(param_3 + 4) << 0x1c) >> 0x1c);
    }
  }
  else {
    FUN_006154c8(param_3);
  }
  FUN_00614df0(&local_c);
  return param_2;
}

