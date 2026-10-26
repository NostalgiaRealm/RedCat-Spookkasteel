/*
 * FUN_00468200 at 00468200
 * undefined __register FUN_00468200(int * param_1)
 * Address ranges: 00468200-00468269;00468271-00468273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468200(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x468212;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x84))();
  if (cVar1 == '\0') {
    *(undefined1 *)(local_8 + 0xd) = 0;
    puStack_c = (undefined1 *)0x468225;
    FUN_00413580(local_8);
    puStack_10 = &LAB_0046826a;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    puStack_c = &stack0xfffffffc;
    (**(code **)(*local_8 + 0x40))();
    (**(code **)(*local_8 + 0x88))();
    *(undefined1 *)((int)local_8 + 0x35) = 1;
    *in_FS_OFFSET = uStack_14;
    puStack_c = (undefined1 *)0x468271;
    puStack_10 = (undefined1 *)0x468262;
    FUN_0041363c(local_8);
    *(undefined1 *)(local_8 + 0xd) = 1;
    return;
  }
  return;
}

