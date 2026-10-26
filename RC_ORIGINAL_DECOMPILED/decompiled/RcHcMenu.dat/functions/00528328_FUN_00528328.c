/*
 * FUN_00528328 at 00528328
 * undefined1 __register FUN_00528328(int * param_1, int param_2)
 * Address ranges: 00528328-005283d7;005283df-005283f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00528328(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 local_d;
  int local_c;
  int *local_8;
  
  local_d = 0;
  puStack_14 = (undefined1 *)0x528340;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_00527ddc(param_1);
  if (*(char *)(iVar2 + 0x22d) == '\0') {
    local_d = local_8[0x86] == local_c;
  }
  else if ((-1 < local_c) && (local_c < local_8[0x81])) {
    puStack_14 = (undefined1 *)0x528371;
    iVar2 = FUN_00527ddc(local_8);
    puStack_14 = (undefined1 *)0x52837c;
    FUN_0054b510(*(uint *)(iVar2 + 0x290));
    puStack_18 = &LAB_005283d8;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    (**(code **)(*local_8 + 0xc0))(local_8,local_c);
    iVar2 = FUN_00527ddc(local_8);
    local_d = FUN_005163d0(local_8[0x82],*(int **)(iVar2 + 0x280));
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x5283ef;
    puStack_18 = (undefined1 *)0x5283cc;
    iVar2 = FUN_00527ddc(local_8);
    puStack_18 = (undefined1 *)0x5283d7;
    uVar1 = FUN_0054b528(*(int **)(iVar2 + 0x290));
    return uVar1;
  }
  return local_d;
}

