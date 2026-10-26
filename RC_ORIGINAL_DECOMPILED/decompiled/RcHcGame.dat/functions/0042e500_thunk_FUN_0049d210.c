/*
 * thunk_FUN_0049d210 at 0042e500
 * undefined thunk_FUN_0049d210(void)
 * Address ranges: 0042e500-0042e504
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_0049d210
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c338 slot 24 for .?AVCCharAnimActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c338 slot 24 for
   .?AVCCharAnimActor@@. Original bytes unchanged; names and types still inferred. */

void __fastcall thunk_FUN_0049d210(int param_1)

{
  int iVar1;
  undefined4 auStack_38 [7];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  FUN_0049d310(auStack_38);
  iVar1 = *(int *)(param_1 + 0x108);
  if (*(char *)(iVar1 + 0x20) == '\0') {
    *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
    if ((*(char *)(iVar1 + 0x39) == '\0') && (*(char *)(iVar1 + 0x38) == '\0')) {
      auStack_38[0] = 0;
    }
    else {
      auStack_38[0] = 1;
      FUN_0049d2d0(auStack_38,iVar1);
    }
  }
  else {
    auStack_38[0] = 1;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if (*(char *)(iVar1 + 0x22) == '\0') {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
  }
  else {
    uStack_1c = *(undefined4 *)(iVar1 + 0x24);
    uStack_18 = *(undefined4 *)(iVar1 + 0x28);
    uStack_14 = *(undefined4 *)(iVar1 + 0x2c);
  }
  uStack_10 = (uint)*(byte *)(iVar1 + 0x21);
  uStack_c = *(undefined4 *)(iVar1 + 0x30);
  FUN_0049d480(auStack_38);
  return;
}

