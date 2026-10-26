/*
 * FUN_0049d210 at 0049d210
 * undefined FUN_0049d210(void)
 * Address ranges: 0049d210-0049d2cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 24 for .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 24 for
   .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0049d210(int param_1)

{
  int iVar1;
  undefined4 local_38 [7];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  
  FUN_0049d310(local_38);
  iVar1 = *(int *)(param_1 + 0x108);
  if (*(char *)(iVar1 + 0x20) == '\0') {
    *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
    if ((*(char *)(iVar1 + 0x39) == '\0') && (*(char *)(iVar1 + 0x38) == '\0')) {
      local_38[0] = 0;
    }
    else {
      local_38[0] = 1;
      FUN_0049d2d0(local_38,iVar1);
    }
  }
  else {
    local_38[0] = 1;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if (*(char *)(iVar1 + 0x22) == '\0') {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
  }
  else {
    local_1c = *(undefined4 *)(iVar1 + 0x24);
    local_18 = *(undefined4 *)(iVar1 + 0x28);
    local_14 = *(undefined4 *)(iVar1 + 0x2c);
  }
  local_10 = (uint)*(byte *)(iVar1 + 0x21);
  local_c = *(undefined4 *)(iVar1 + 0x30);
  FUN_0049d480(local_38);
  return;
}

