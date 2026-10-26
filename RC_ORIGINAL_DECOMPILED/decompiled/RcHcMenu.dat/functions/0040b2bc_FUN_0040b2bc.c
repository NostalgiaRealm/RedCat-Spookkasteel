/*
 * FUN_0040b2bc at 0040b2bc
 * undefined __register FUN_0040b2bc(int param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 0040b2bc-0040b40d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b2bc(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  LPCSTR lpFormat;
  LCID Locale;
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  CHAR *lpDateStr;
  int iVar2;
  int *piVar3;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined4 local_11c;
  CHAR local_118 [256];
  SYSTEMTIME local_18;
  undefined *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = 0;
  local_8 = (undefined *)0x0;
  puStack_12c = &LAB_0040b40e;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  FUN_00403db0(param_2);
  local_18.wYear = *(WORD *)(param_4 + -0xe);
  local_18.wMonth = *(WORD *)(param_4 + -0x10);
  local_18.wDay = *(WORD *)(param_4 + -0x12);
  FUN_00403e48((int *)&local_8,0x40b424);
  iVar2 = 0x100;
  lpDateStr = local_118;
  lpFormat = FUN_004041f4(local_8);
  lpDate = &local_18;
  dwFlags = 4;
  Locale = GetThreadLocale();
  iVar2 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,iVar2);
  if (iVar2 != 0) {
    FUN_00403fe0(param_2,local_118,0x100);
    if (param_1 == 1) {
      if (DAT_005735b8 == 4) {
        if (DAT_005735ba == 1) {
          iVar2 = FUN_00404030(*param_2);
          iVar2 = FUN_0040d86c(*param_2,iVar2);
          if (iVar2 == 4) {
            iVar2 = FUN_0040d958(*param_2,3);
            FUN_00403f68(&local_11c,local_118 + iVar2 + -1);
            uVar1 = FUN_0040d9bc(local_11c,2);
            FUN_00403e98(param_2,(undefined4 *)(local_118 + iVar2 + -1),uVar1);
          }
        }
      }
      else if (DAT_005735b8 == 0x11) {
        piVar3 = param_2;
        uVar1 = FUN_0040d9bc(*param_2,1);
        FUN_00404238(*param_2,1,uVar1,piVar3);
      }
    }
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_0040b415;
  puStack_12c = (undefined1 *)0x40b405;
  FUN_00403db0(&local_11c);
  puStack_12c = (undefined1 *)0x40b40d;
  FUN_00403db0((int *)&local_8);
  return;
}

