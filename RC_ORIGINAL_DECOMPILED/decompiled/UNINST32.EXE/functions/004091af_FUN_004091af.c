/*
 * FUN_004091af at 004091af
 * undefined __cdecl FUN_004091af(LPCSTR param_1, int param_2)
 * Address ranges: 004091af-00409433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_004091af(LPCSTR param_1,int param_2)

{
  bool bVar1;
  LPCSTR pCVar2;
  char *pcVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  CHAR local_54c [256];
  char local_44c [256];
  byte local_34c;
  CHAR local_204 [256];
  CHAR local_104 [256];
  
  lstrcpyA(local_204,param_1);
  lstrcpyA(local_54c,&DAT_00412304);
  pCVar2 = FUN_0040be4c(local_204,0x2a);
  if (((pCVar2 != (LPCSTR)0x0) || (pCVar2 = FUN_0040be4c(local_204,0x3f), pCVar2 != (LPCSTR)0x0)) &&
     (pcVar3 = FUN_0040b53f(local_204), local_204 < pcVar3)) {
    lstrcpyA(local_54c,pcVar3 + -1);
    pcVar3[-1] = '\0';
  }
  iVar4 = lstrlenA(local_204);
  if (3 < iVar4) {
    GetWindowsDirectoryA(local_104,0x100);
    iVar4 = lstrcmpiA(local_204,local_104);
    if (iVar4 != 0) {
      GetSystemDirectoryA(local_104,0x100);
      iVar4 = lstrcmpiA(local_204,local_104);
      if (iVar4 != 0) {
        if ((DAT_00413738 != (LPCSTR)0x0) && (iVar4 = lstrcmpiA(local_204,DAT_00413738), iVar4 == 0)
           ) {
          return;
        }
        lstrcpyA(local_104,local_204);
        lstrcatA(local_104,&DAT_00412304);
        bVar1 = FUN_0040a6fe(local_104,0x17,local_44c);
        iVar4 = CONCAT31(extraout_var,bVar1);
        while (iVar4 == 0) {
          if (((local_34c & 0x10) != 0) && (local_44c[0] != '.')) {
            lstrcpyA(local_104,local_204);
            lstrcatA(local_104,&DAT_004120e0);
            lstrcatA(local_104,local_44c);
            lstrcatA(local_104,local_54c);
            FUN_004091af(local_104,param_2);
          }
          bVar1 = FUN_0040a740(local_44c);
          iVar4 = CONCAT31(extraout_var_00,bVar1);
        }
        FUN_0040a77d((int)local_44c);
        if (param_2 != 0) {
          lstrcpyA(local_104,local_204);
          lstrcatA(local_104,local_54c);
          bVar1 = FUN_0040a6fe(local_104,7,local_44c);
          iVar4 = CONCAT31(extraout_var_01,bVar1);
          while (iVar4 == 0) {
            if ((local_34c & 0x10) == 0) {
              lstrcpyA(local_104,local_204);
              lstrcatA(local_104,&DAT_004120e0);
              lstrcatA(local_104,local_44c);
              FUN_0040a6db(local_104,0);
              FUN_0040a440(local_104);
            }
            bVar1 = FUN_0040a740(local_44c);
            iVar4 = CONCAT31(extraout_var_02,bVar1);
          }
          FUN_0040a77d((int)local_44c);
        }
        FUN_0040a3ff(local_204);
      }
    }
  }
  return;
}

