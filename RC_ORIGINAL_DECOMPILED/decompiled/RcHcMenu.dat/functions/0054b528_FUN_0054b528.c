/*
 * FUN_0054b528 at 0054b528
 * undefined __register FUN_0054b528(int * param_1)
 * Address ranges: 0054b528-0054b5df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b528(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_128;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_0054b5e0;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x11] < 1) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_128 = "Stack is empty";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar3 = puStack_114;
  }
  puStack_114 = puVar3;
  piVar1 = local_8 + 0x11;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  if ((local_8[0x11] == 0) && ((char)local_8[0x10] == '\x02')) {
    FUN_0054a2b0(local_8);
  }
  *in_FS_OFFSET = pcStack_128;
  FUN_00403dd4(&local_10,2);
  return;
}

