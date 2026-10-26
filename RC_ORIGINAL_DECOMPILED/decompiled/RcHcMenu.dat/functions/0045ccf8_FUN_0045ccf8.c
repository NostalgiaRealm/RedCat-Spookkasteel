/*
 * FUN_0045ccf8 at 0045ccf8
 * undefined __register FUN_0045ccf8(int param_1, undefined * param_2, undefined * param_3, int * param_4, undefined * param_5)
 * Address ranges: 0045ccf8-0045cd55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045ccf8(int param_1,undefined *param_2,undefined *param_3,int *param_4,undefined *param_5)

{
  LPCSTR lpFileName;
  LPCSTR lpDefault;
  LPCSTR lpKeyName;
  LPCSTR lpAppName;
  CHAR *lpReturnedString;
  DWORD DVar1;
  CHAR local_804 [2048];
  
  lpFileName = FUN_004041f4(*(undefined **)(param_1 + 4));
  DVar1 = 0x800;
  lpReturnedString = local_804;
  lpDefault = FUN_004041f4(param_5);
  lpKeyName = FUN_004041f4(param_3);
  lpAppName = FUN_004041f4(param_2);
  DVar1 = GetPrivateProfileStringA(lpAppName,lpKeyName,lpDefault,lpReturnedString,DVar1,lpFileName);
  FUN_00403e98(param_4,(undefined4 *)local_804,DVar1);
  return;
}

