/*
 * FUN_0047f580 at 0047f580
 * int __register FUN_0047f580(undefined4 param_1)
 * Address ranges: 0047f580-0047f5c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0047f580(undefined4 param_1)

{
  int iVar1;
  int local_44;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 local_24 [2];
  undefined1 local_22 [34];
  
  local_22[0] = 0;
  local_28 = 0;
  puStack_2c = local_24;
  uStack_30 = 0x20;
  puStack_34 = local_22;
  uStack_38 = 0x60004;
  thunk_FUN_00479000(param_1);
  iVar1 = FUN_0040a108((char *)((int)&uStack_38 + 2));
  if (iVar1 != 0) {
    local_44 = (int)&uStack_38 + 2;
    thunk_FUN_00479577(local_44);
  }
  return local_44;
}

