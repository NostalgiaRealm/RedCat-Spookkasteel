/*
 * FUN_0051cf34 at 0051cf34
 * undefined __register FUN_0051cf34(int param_1, char param_2)
 * Address ranges: 0051cf34-0051d031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051cf34(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  char local_9;
  int local_8;
  
  puStack_10 = (undefined1 *)0x51cf4b;
  local_9 = param_2;
  local_8 = param_1;
  FUN_005200dc(*(uint *)(param_1 + 0x3c));
  puStack_14 = &LAB_0051d032;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  iVar2 = FUN_0051c878(local_8);
  if ((iVar2 == -1) && (local_9 == '\0')) {
    FUN_0045b8fc(*(undefined4 **)(*(int *)(local_8 + 0x3c) + 0x278));
    FUN_0051cc08(local_8,'\0');
    FUN_0051cb6c(local_8,0);
  }
  else {
    iVar2 = FUN_0051c878(local_8);
    if ((iVar2 == -1) && (local_9 != '\0')) {
      FUN_0051cc08(local_8,'\0');
      iVar2 = FUN_0045ba40(*(int *)(*(int *)(local_8 + 0x3c) + 0x278));
      FUN_0051cb6c(local_8,iVar2);
    }
    else {
      iVar2 = FUN_0051c878(local_8);
      if ((iVar2 == -1) || (local_9 != '\0')) {
        uVar3 = FUN_0051c878(local_8);
        piVar1 = *(int **)(*(int *)(local_8 + 0x3c) + 0x278);
        (**(code **)(*piVar1 + 0x10))(piVar1,uVar3);
      }
      else if (*(char *)(local_8 + 0x24) == '\0') {
        FUN_0051cc08(local_8,'\x01');
      }
      else {
        FUN_0051cc08(local_8,'\0');
      }
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0051d039;
  puStack_14 = (undefined1 *)0x51d031;
  FUN_005200f8(*(int **)(local_8 + 0x3c));
  return;
}

