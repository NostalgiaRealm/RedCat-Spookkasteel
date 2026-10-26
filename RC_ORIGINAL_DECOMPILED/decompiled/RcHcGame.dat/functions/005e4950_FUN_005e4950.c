/*
 * FUN_005e4950 at 005e4950
 * undefined FUN_005e4950(void)
 * Address ranges: 005e4950-005e4b22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 1 for .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 1 for
   .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

int __thiscall FUN_005e4950(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  char local_9;
  char *pcStack_8;
  int iStack_4;
  
  if (param_2 == -1) {
    return 0;
  }
  uVar1 = **(uint **)(param_1 + 0x20);
  cVar3 = (char)param_2;
  if (uVar1 != 0) {
    iVar4 = **(int **)(param_1 + 0x30);
    if (uVar1 < iVar4 + uVar1) {
      **(int **)(param_1 + 0x30) = iVar4 + -1;
      pcVar2 = (char *)**(int **)(param_1 + 0x20);
      **(int **)(param_1 + 0x20) = (int)(pcVar2 + 1);
      *pcVar2 = cVar3;
      return param_2;
    }
  }
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 == 0) {
    return -1;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_005e4ab1:
    iVar4 = FUN_0060e3b3((int)cVar3,iVar4);
    if (iVar4 != -1) {
      return param_2;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x44);
    local_9 = cVar3;
    FUN_0040ce10();
    iVar7 = *(int *)(iVar4 + 8);
    iVar6 = -1;
    if (iVar7 != -1) {
      iVar6 = iVar7;
    }
    if (iVar6 != 0) {
      FUN_0060ab50(*(int *)(iVar4 + 4),*(int *)(iVar4 + 4) + iVar6,iVar7 - iVar6);
      iVar6 = *(int *)(iVar4 + 8) - iVar6;
      cVar3 = FUN_00401940(iVar6,0);
      if (cVar3 != '\0') {
        *(int *)(iVar4 + 8) = iVar6;
        *(undefined1 *)(iVar6 + *(int *)(iVar4 + 4)) = 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x44);
    if (-*(int *)(iVar4 + 8) - 1U < 9) {
      FUN_005fe5fb();
    }
    iVar7 = *(int *)(iVar4 + 8) + 8;
    cVar3 = FUN_00401940(iVar7,0);
    if (cVar3 != '\0') {
      puVar5 = (undefined4 *)(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 8));
      *puVar5 = 0;
      puVar5[1] = 0;
      *(int *)(iVar4 + 8) = iVar7;
      *(undefined1 *)(*(int *)(iVar4 + 4) + iVar7) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x44);
    FUN_004c4700();
    iVar7 = *(int *)(iVar4 + 4);
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar4 + 8) + iVar7;
    }
    iVar4 = *(int *)(param_1 + 0x44);
    FUN_004c4700();
    iVar4 = (**(code **)(**(int **)(param_1 + 0x38) + 0x14))
                      (param_1 + 0x40,&local_9,&pcStack_8,&pcStack_8,*(undefined4 *)(iVar4 + 4),
                       iVar7,&iStack_4);
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        if (iVar4 != 3) {
          return -1;
        }
        iVar4 = *(int *)(param_1 + 0x50);
        cVar3 = local_9;
        goto LAB_005e4ab1;
      }
      if (pcStack_8 == &local_9) {
        return -1;
      }
    }
    iVar4 = *(int *)(param_1 + 0x44);
    FUN_004c4700();
    iVar7 = *(int *)(param_1 + 0x44);
    iVar6 = iStack_4 - *(int *)(iVar4 + 4);
    FUN_004c4700();
    iVar4 = FUN_0060d47e(*(undefined4 *)(iVar7 + 4),iVar6,1,*(undefined4 *)(param_1 + 0x50));
    if (iVar4 == iVar6) {
      return param_2;
    }
  }
  return -1;
}

