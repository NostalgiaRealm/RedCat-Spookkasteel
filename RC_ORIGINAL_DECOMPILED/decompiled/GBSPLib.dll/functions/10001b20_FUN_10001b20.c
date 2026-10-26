/*
 * FUN_10001b20 at 10001b20
 * undefined FUN_10001b20(void)
 * Address ranges: 10001b20-10001bfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001b20(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_18;
  undefined4 local_14 [4];
  undefined4 local_4;
  
  iVar2 = param_1;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    pcVar4 = (char *)(param_1 + 0x34);
    do {
      cVar1 = *pcVar4;
      puVar5 = &DAT_1003fdf8 + *(int *)(pcVar4 + -4) * 5;
      puVar7 = local_14;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      local_4 = 6;
      if (cVar1 != '\0') {
        FUN_10002b30(local_14);
      }
      iVar3 = FUN_1000c3f0(local_14);
      iVar8 = 0;
      param_1 = iVar3;
      if (0 < *(int *)(iVar2 + 0x28)) {
        piVar6 = (int *)(iVar2 + 0x30);
        do {
          if (iVar3 == 0) break;
          if (local_18 != iVar8) {
            FUN_1000c890(iVar3,0,&DAT_1003fdf8 + *piVar6 * 5,(char)piVar6[1] == '\0',&param_1);
            iVar3 = param_1;
          }
          iVar8 = iVar8 + 1;
          piVar6 = piVar6 + 5;
        } while (iVar8 < *(int *)(iVar2 + 0x28));
      }
      *(int *)(pcVar4 + -8) = iVar3;
      local_18 = local_18 + 1;
      pcVar4 = pcVar4 + 0x14;
    } while (local_18 < *(int *)(iVar2 + 0x28));
  }
  FUN_10001920(iVar2);
  return;
}

