/*
 * FUN_005add40 at 005add40
 * undefined FUN_005add40(void)
 * Address ranges: 005add40-005addea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005add40(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint local_4;
  
  iVar2 = param_1;
  iVar5 = *(int *)(param_1 + 8);
  local_4 = 0;
  if (0 < iVar5) {
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar1 = *(int *)(iVar2 + 4);
        if (iVar1 == 0) {
          puVar4 = &DAT_0064a3b4;
        }
        else {
          puVar4 = (undefined1 *)(iVar1 + iVar6);
        }
        cVar3 = FUN_005ad6e0(*puVar4,&local_4);
        if (cVar3 == '\0') {
          if (param_2 == (int *)0x0) {
            return 0;
          }
          *param_2 = 0;
          return 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    puVar4 = *(undefined1 **)(iVar2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060b449(puVar4,&DAT_0069081c,&param_1);
    if (iVar5 == 1) {
      if (param_2 != (int *)0x0) {
        *param_2 = param_1;
      }
      return 1;
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  return 0;
}

