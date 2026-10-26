/*
 * FUN_004b01ec at 004b01ec
 * uint __register FUN_004b01ec(int param_1)
 * Address ranges: 004b01ec-004b02bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004b01ec(int param_1)

{
  int iVar1;
  int extraout_EDX;
  int iVar2;
  int extraout_EDX_00;
  undefined4 local_38;
  
  FUN_00424198();
  FUN_00424198();
  if (SBORROW4(100,param_1)) {
    thunk_FUN_00402874(100 - param_1);
  }
  FUN_004241b8();
  iVar1 = FUN_00402b54();
  local_38 = -iVar1;
  iVar2 = extraout_EDX + (uint)(iVar1 != 0);
  iVar1 = -iVar2;
  if (SBORROW4(0,iVar2)) {
    local_38 = thunk_FUN_00402874(local_38);
    iVar1 = extraout_EDX_00;
  }
  if ((int)local_38 >> 0x1f != iVar1) {
    local_38 = thunk_FUN_00402874(local_38);
  }
  if (-100 < (int)local_38) {
    local_38 = 0xffffff9c;
  }
  if ((int)local_38 < -4000) {
    local_38 = 0xfffff060;
  }
  return local_38;
}

