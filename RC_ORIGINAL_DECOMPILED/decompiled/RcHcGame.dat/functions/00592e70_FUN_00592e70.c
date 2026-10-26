/*
 * FUN_00592e70 at 00592e70
 * undefined FUN_00592e70(void)
 * Address ranges: 00592e70-00592f46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00592e70(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  
  if (DAT_006c9f68 == '\0') {
    DAT_006c9f68 = 1;
    if (param_2 != 0) {
      iVar1 = FUN_0061f613(param_2);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x2ec) < 100) {
          *(int *)(param_1 + 0x14 + *(int *)(param_1 + 0x2ec) * 4) = iVar1;
          *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + 1;
        }
        else {
          puVar2 = (undefined4 *)(param_1 + 0x14);
          FUN_0060b25d(*(undefined4 *)(param_1 + 0x14));
          iVar3 = 99;
          do {
            *puVar2 = puVar2[1];
            puVar2 = puVar2 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          *(int *)(param_1 + 0x1a0) = iVar1;
        }
        if ((*(char *)(param_1 + 0x309) != '\0') && (*(char *)(param_1 + 0x2f0) != '\0')) {
          iVar1 = DAT_006c8de0;
          if (DAT_006c8de0 == 0) {
            iVar1 = FUN_0055b280();
          }
          bVar4 = *(char *)(iVar1 + 0x194) == '\0';
          if (bVar4) {
            FUN_005630f0();
          }
          FUN_00592f50();
          if (bVar4) {
            FUN_005637b0();
          }
        }
      }
    }
    DAT_006c9f68 = '\0';
  }
  return;
}

