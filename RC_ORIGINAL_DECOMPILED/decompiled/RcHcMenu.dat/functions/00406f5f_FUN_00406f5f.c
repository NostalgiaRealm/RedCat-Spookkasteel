/*
 * FUN_00406f5f at 00406f5f
 * undefined __register FUN_00406f5f(undefined * param_1, char * param_2, int param_3)
 * Address ranges: 00406f5f-00406fdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406f5f(undefined *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  int iVar4;
  
  bVar7 = 0;
  if ((*(int *)(param_1 + 4) == 0xd7b1) ||
     ((param_1 == &DAT_00573050 && (FUN_00407043(&DAT_00573050), DAT_00573054 == 0xd7b1)))) {
    if (0 < param_3) {
      pcVar5 = (char *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
      iVar4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
      do {
        iVar3 = iVar4 + -1;
        if (iVar4 < 1) {
          *(char **)(param_1 + 0xc) = pcVar5;
          cVar2 = FUN_00406ed4(param_1);
          iVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
          pcVar5 = (char *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
        }
        else {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        }
        if (cVar2 == '\x1a') {
          return;
        }
        if (cVar2 == '\r') {
          pcVar5 = pcVar5 + -1;
          break;
        }
        *param_2 = cVar2;
        iVar6 = param_3 + -1;
        bVar1 = 0 < param_3;
        iVar4 = iVar3;
        param_3 = iVar6;
        param_2 = param_2 + (uint)bVar7 * -2 + 1;
      } while (iVar6 != 0 && bVar1);
      *(int *)(param_1 + 0xc) = (int)pcVar5 - *(int *)(param_1 + 0x14);
    }
  }
  else {
    FUN_004028d8(0x68);
  }
  return;
}

