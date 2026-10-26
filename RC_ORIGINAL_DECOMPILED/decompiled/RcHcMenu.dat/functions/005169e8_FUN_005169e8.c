/*
 * FUN_005169e8 at 005169e8
 * bool __register FUN_005169e8(int param_1, undefined * param_2, undefined4 * param_3)
 * Address ranges: 005169e8-00516a36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005169e8(int param_1,undefined *param_2,undefined4 *param_3)

{
  LPCSTR lpValueName;
  LSTATUS LVar1;
  undefined4 uVar2;
  LPDWORD lpReserved;
  undefined4 **lpType;
  LPBYTE lpData;
  LPDWORD lpcbData;
  undefined4 *local_14;
  
  lpType = &local_14;
  local_14 = param_3;
  FUN_00402cfc(param_3,8,0);
  lpcbData = param_3 + 1;
  lpData = (LPBYTE)0x0;
  lpReserved = (LPDWORD)0x0;
  lpValueName = FUN_004041f4(param_2);
  LVar1 = RegQueryValueExA(*(HKEY *)(param_1 + 4),lpValueName,lpReserved,(LPDWORD)lpType,lpData,
                           lpcbData);
  uVar2 = FUN_00516798((int)local_14);
  *(char *)param_3 = (char)uVar2;
  return LVar1 == 0;
}

