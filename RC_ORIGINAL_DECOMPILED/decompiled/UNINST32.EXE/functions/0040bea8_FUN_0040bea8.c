/*
 * FUN_0040bea8 at 0040bea8
 * undefined4 __cdecl FUN_0040bea8(LPCSTR param_1)
 * Address ranges: 0040bea8-0040bf2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_0040bea8(LPCSTR param_1)

{
  undefined1 uVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  byte local_10c;
  byte local_10b;
  
  BVar2 = SetCurrentDirectoryA(param_1);
  if (BVar2 != 0) {
    DVar3 = GetCurrentDirectoryA(0x105,(LPSTR)&local_10c);
    if (DVar3 != 0) {
      if (((local_10c != 0x5c) && (local_10c != 0x2f)) || (local_10c != local_10b)) {
        param_1 = (LPCSTR)CONCAT31(param_1._1_3_,0x3d);
        uVar4 = FUN_0040caff((uint)local_10c);
        uVar1 = SUB41(param_1,0);
        param_1 = (LPCSTR)(uint)CONCAT12(0x3a,CONCAT11((char)uVar4,uVar1));
        BVar2 = SetEnvironmentVariableA((LPCSTR)&param_1,(LPCSTR)&local_10c);
        if (BVar2 == 0) goto LAB_0040bf1c;
      }
      return 0;
    }
  }
LAB_0040bf1c:
  DVar3 = GetLastError();
  FUN_0040ca98(DVar3);
  return 0xffffffff;
}

