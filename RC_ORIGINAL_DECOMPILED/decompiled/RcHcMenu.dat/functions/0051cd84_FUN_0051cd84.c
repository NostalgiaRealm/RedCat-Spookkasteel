/*
 * FUN_0051cd84 at 0051cd84
 * undefined __register FUN_0051cd84(int param_1)
 * Address ranges: 0051cd84-0051ce1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051cd84(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = (undefined1 *)0x51cd96;
  local_8 = param_1;
  FUN_005200dc(*(uint *)(param_1 + 0x3c));
  puStack_10 = &LAB_0051ce1f;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  iVar2 = FUN_0051c878(local_8);
  if (iVar2 == -1) {
    FUN_0045b8fc(*(undefined4 **)(*(int *)(local_8 + 0x3c) + 0x278));
    FUN_0051cc08(local_8,'\0');
    FUN_0051cb6c(local_8,0);
  }
  else if (*(char *)(local_8 + 0x24) == '\0') {
    uVar3 = FUN_0051c878(local_8);
    piVar1 = *(int **)(*(int *)(local_8 + 0x3c) + 0x278);
    (**(code **)(*piVar1 + 0x10))(piVar1,uVar3);
  }
  else {
    FUN_0051cc08(local_8,'\0');
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0051ce26;
  puStack_10 = (undefined1 *)0x51ce1e;
  FUN_005200f8(*(int **)(local_8 + 0x3c));
  return;
}

