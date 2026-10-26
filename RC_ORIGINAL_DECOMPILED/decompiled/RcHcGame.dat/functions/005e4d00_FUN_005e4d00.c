/*
 * FUN_005e4d00 at 005e4d00
 * undefined FUN_005e4d00(void)
 * Address ranges: 005e4d00-005e4ee9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 5 for .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 5 for
   .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

uint __fastcall FUN_005e4d00(int param_1)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  uVar3 = **(uint **)(param_1 + 0x1c);
  if (uVar3 != 0) {
    iVar4 = **(int **)(param_1 + 0x2c);
    if (uVar3 < iVar4 + uVar3) {
      **(int **)(param_1 + 0x2c) = iVar4 + -1;
      pbVar1 = (byte *)**(int **)(param_1 + 0x1c);
      **(int **)(param_1 + 0x1c) = (int)(pbVar1 + 1);
      return (uint)*pbVar1;
    }
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      iVar4 = *(int *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
      FUN_0040ce10();
      iVar5 = *(int *)(iVar4 + 8);
      iVar6 = -1;
      if (iVar5 != -1) {
        iVar6 = iVar5;
      }
      if (iVar6 != 0) {
        FUN_0060ab50(*(int *)(iVar4 + 4),*(int *)(iVar4 + 4) + iVar6,iVar5 - iVar6);
        iVar6 = *(int *)(iVar4 + 8) - iVar6;
        cVar2 = FUN_00401940(iVar6,0);
        if (cVar2 != '\0') {
          *(int *)(iVar4 + 8) = iVar6;
          *(undefined1 *)(*(int *)(iVar4 + 4) + iVar6) = 0;
        }
      }
      iVar4 = FUN_0060e3d7(*(undefined4 *)(param_1 + 0x50));
      do {
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        iVar5 = *(int *)(param_1 + 0x44);
        if (-*(int *)(iVar5 + 8) - 1U < 2) {
          FUN_005fe5fb();
        }
        iVar6 = *(int *)(iVar5 + 8) + 1;
        cVar2 = FUN_00401940(iVar6,0);
        if (cVar2 != '\0') {
          *(char *)(*(int *)(iVar5 + 8) + *(int *)(iVar5 + 4)) = (char)iVar4;
          *(int *)(iVar5 + 8) = iVar6;
          *(undefined1 *)(*(int *)(iVar5 + 4) + iVar6) = 0;
        }
        iVar4 = *(int *)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
        FUN_004c4700();
        iVar5 = *(int *)(iVar4 + 4);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar4 + 8) + iVar5;
        }
        iVar4 = *(int *)(param_1 + 0x44);
        FUN_004c4700();
        iVar4 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                          (param_1 + 0x40,*(undefined4 *)(iVar4 + 4),iVar5,auStack_4,&uStack_c,
                           (int)&uStack_c + 1,auStack_8);
        if (iVar4 == 0) {
LAB_005e4ed9:
          return uStack_c & 0xff;
        }
        if (iVar4 != 1) {
          if (iVar4 != 3) {
            return 0xffffffff;
          }
          if (*(int *)(*(int *)(param_1 + 0x44) + 8) != 0) {
            iVar4 = *(int *)(param_1 + 0x44);
            if (((*(int *)(iVar4 + 4) != 0) &&
                (cVar2 = *(char *)(*(int *)(iVar4 + 4) + -1), cVar2 != '\0')) && (cVar2 != -1)) {
              FUN_00401940(*(undefined4 *)(iVar4 + 8),0);
            }
            if (*(int *)(iVar4 + 4) != 0) {
              *(undefined1 *)(*(int *)(iVar4 + 4) + -1) = 0xff;
            }
            uStack_c = (uint)**(byte **)(iVar4 + 4);
            goto LAB_005e4ed9;
          }
        }
        iVar4 = FUN_0060e3d7(*(undefined4 *)(param_1 + 0x50));
      } while( true );
    }
    uVar3 = FUN_0060e3d7(*(int *)(param_1 + 0x50));
    if (uVar3 != 0xffffffff) {
      return uVar3 & 0xff;
    }
  }
  return 0xffffffff;
}

