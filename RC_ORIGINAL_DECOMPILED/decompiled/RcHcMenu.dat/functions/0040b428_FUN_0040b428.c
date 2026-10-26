/*
 * FUN_0040b428 at 0040b428
 * undefined __register FUN_0040b428(int param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 0040b428-0040b505
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b428(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  LPCSTR lpFormat;
  LCID Locale;
  undefined4 *in_FS_OFFSET;
  DWORD dwFlags;
  SYSTEMTIME *lpDate;
  CHAR *lpDateStr;
  int iVar1;
  int *piVar2;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  CHAR local_118 [256];
  SYSTEMTIME local_18;
  undefined *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_128 = &LAB_0040b506;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  FUN_00403db0(param_2);
  local_18.wYear = *(WORD *)(param_4 + -0xe);
  local_18.wMonth = *(WORD *)(param_4 + -0x10);
  local_18.wDay = *(WORD *)(param_4 + -0x12);
  if (param_1 < 3) {
    FUN_00403e48((int *)&local_8,0x40b51c);
  }
  else {
    FUN_00403e48((int *)&local_8,0x40b528);
  }
  iVar1 = 0x100;
  lpDateStr = local_118;
  lpFormat = FUN_004041f4(local_8);
  lpDate = &local_18;
  dwFlags = 4;
  Locale = GetThreadLocale();
  iVar1 = GetDateFormatA(Locale,dwFlags,lpDate,lpFormat,lpDateStr,iVar1);
  if (iVar1 != 0) {
    FUN_00403fe0(param_2,local_118,0x100);
    if ((param_1 == 1) && (*(char *)*param_2 == '0')) {
      piVar2 = param_2;
      iVar1 = FUN_00404030(*param_2);
      FUN_00404238(*param_2,2,iVar1 - 1,piVar2);
    }
  }
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_0040b50d;
  puStack_128 = (undefined1 *)0x40b505;
  FUN_00403db0((int *)&local_8);
  return;
}

