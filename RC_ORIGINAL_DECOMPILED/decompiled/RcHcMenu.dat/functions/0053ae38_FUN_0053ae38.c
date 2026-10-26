/*
 * FUN_0053ae38 at 0053ae38
 * undefined __register FUN_0053ae38(int * param_1)
 * Address ranges: 0053ae38-0053af59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053ae38(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
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
  puStack_118 = &LAB_0053af5a;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0xb4) & 2) != 0) {
    cVar2 = FUN_005387bc(param_1);
    puVar1 = puStack_114;
    if (cVar2 != '\0') {
      if ((char)local_8[0xb6] != '\0') {
        FUN_00402fe0(*local_8,local_110);
        FUN_00403fd4(&local_10,local_110);
        pcStack_128 = "OAGrid not in browse mode.";
        FUN_004040f0(&local_c,3);
        FUN_00403d94(local_c);
      }
      iVar3 = FUN_0053881c(local_8);
      iVar3 = FUN_00538980(local_8,iVar3);
      FUN_005390e0((int)local_8,iVar3);
      uVar4 = FUN_00529294((int)local_8);
      puVar1 = puStack_114;
      if ((char)uVar4 != '\0') {
        cVar2 = (**(code **)(*(int *)local_8[0xa4] + 100))();
        puVar1 = puStack_114;
        if (cVar2 == '\0') {
          FUN_0054916c((int *)local_8[0xa4]);
          *(undefined1 *)(local_8 + 0xb6) = 1;
          piVar5 = (int *)FUN_00538b6c(local_8);
          FUN_00493be4(piVar5);
          FUN_0053970c(local_8);
          FUN_00539d5c(local_8);
          puVar1 = puStack_114;
        }
      }
    }
  }
  puStack_114 = puVar1;
  *in_FS_OFFSET = pcStack_128;
  FUN_00403dd4(&local_10,2);
  return;
}

