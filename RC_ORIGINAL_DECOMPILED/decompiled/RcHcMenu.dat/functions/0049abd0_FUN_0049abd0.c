/*
 * FUN_0049abd0 at 0049abd0
 * undefined __register FUN_0049abd0(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049abd0-0049ac2b;0049ac43-0049ac54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049abd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x41c) != '\0') {
    puStack_1c = (undefined1 *)0x49abf7;
    piVar1 = FUN_004990a4((int *)&PTR_FUN_004988dc,'\x01',param_3);
    puStack_20 = &LAB_0049ac2c;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00499ba4(piVar1,*(int *)(param_1 + 0x24),
                 CONCAT31((int3)((uint)extraout_ECX >> 8),
                          *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x42c)));
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x49ac4e;
    FUN_0049b6c0(param_1,(int)piVar1);
  }
  return;
}

