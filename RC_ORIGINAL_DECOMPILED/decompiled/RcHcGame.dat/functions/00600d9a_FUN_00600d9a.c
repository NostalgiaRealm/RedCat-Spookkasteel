/*
 * FUN_00600d9a at 00600d9a
 * undefined FUN_00600d9a(void)
 * Address ranges: 00600d9a-00600df9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00600d9a(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *local_c;
  uint local_8;
  
  uVar2 = DAT_0070fffc;
  uVar1 = DAT_0070ffe8;
  local_c = _malloc(0x200);
  bVar3 = local_c == (undefined *)0x0;
  if (bVar3) {
    local_c = PTR_DAT_006b26b0;
  }
  else {
    FUN_0060eb70(local_c,PTR_DAT_006b26b0,0x200);
  }
  local_8 = (uint)!bVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = local_c;
  param_1[3] = local_8;
  return;
}

