/*
 * FUN_004b1410 at 004b1410
 * undefined FUN_004b1410(void)
 * Address ranges: 004b1410-004b15b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_004b1410(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  int iVar4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e7a8;
  local_c = ExceptionList;
  local_1c[0] = *param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  uVar7 = 0;
  local_4 = 0;
  iVar2 = local_18;
  uVar6 = local_14;
  if (local_14 != 0) {
    do {
      if (iVar2 == 0) {
        pbVar5 = &DAT_0064a3b4;
      }
      else {
        if ((*(char *)(iVar2 + -1) != '\0') && (*(char *)(iVar2 + -1) != -1)) {
          FUN_00401940(uVar6,0);
          iVar2 = local_18;
          uVar6 = local_14;
        }
        if (iVar2 != 0) {
          *(undefined1 *)(iVar2 + -1) = 0xff;
          iVar2 = local_18;
          uVar6 = local_14;
        }
        pbVar5 = (byte *)(iVar2 + uVar7);
      }
      if (*pbVar5 == 0xf8) {
        if ((uVar6 < uVar7) || (iVar2 == 0)) {
                    /* WARNING: Read-only address (ram,0x0064a3b4) is written */
          DAT_0064a3b4 = 0x6f;
          iVar2 = local_18;
          uVar6 = local_14;
        }
        else {
          if ((*(char *)(iVar2 + -1) != '\0') && (*(char *)(iVar2 + -1) != -1)) {
            FUN_00401940(uVar6,0);
            iVar2 = local_18;
          }
          iVar4 = 0;
          if (iVar2 != 0) {
            *(undefined1 *)(iVar2 + -1) = 0xff;
            iVar4 = local_18;
          }
          *(undefined1 *)(iVar4 + uVar7) = 0x6f;
          iVar2 = local_18;
          uVar6 = local_14;
        }
      }
      else if (0x7f < *pbVar5) {
        if ((uVar6 < uVar7) || (iVar2 == 0)) {
          puVar3 = &DAT_0064a3b4;
        }
        else {
          if ((*(char *)(iVar2 + -1) != '\0') && (*(char *)(iVar2 + -1) != -1)) {
            FUN_00401940(uVar6,0);
            iVar2 = local_18;
          }
          iVar4 = 0;
          if (iVar2 != 0) {
            *(undefined1 *)(iVar2 + -1) = 0xff;
            iVar4 = local_18;
          }
          puVar3 = (undefined1 *)(iVar4 + uVar7);
        }
        *puVar3 = 0x2e;
        iVar2 = local_18;
        uVar6 = local_14;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = local_c;
  return param_1;
}

