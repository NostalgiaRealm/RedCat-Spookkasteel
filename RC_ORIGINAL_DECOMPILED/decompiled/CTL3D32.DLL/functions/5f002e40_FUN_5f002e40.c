/*
 * FUN_5f002e40 at 5f002e40
 * bool __cdecl FUN_5f002e40(HWND param_1, ushort param_2, short param_3, undefined4 param_4)
 * Address ranges: 5f002e40-5f002f2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __cdecl FUN_5f002e40(HWND param_1,ushort param_2,short param_3,undefined4 param_4)

{
  HANDLE pvVar1;
  int iVar2;
  LONG LVar3;
  ushort *puVar4;
  int iVar5;
  WCHAR local_20 [16];
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    return false;
  }
  iVar5 = 0;
  puVar4 = &DAT_5f00b068;
  GetClassNameW(param_1,local_20,0x10);
  do {
    if ((*puVar4 & param_2) != 0) {
      iVar2 = lstrcmpW((LPCWSTR)(puVar4 + -0x18),local_20);
      if (iVar2 == 0) {
        LVar3 = GetWindowLongW(param_1,-0x10);
        iVar2 = (*(code *)(&PTR_FUN_5f00b064)[iVar5 * 0xd])
                          (param_1,LVar3,param_2,CONCAT22((short)((uint)puVar4 >> 0x10),param_3),
                           param_4);
        if (iVar2 == 1) {
          if ((param_3 == 1) && (DAT_5f005262 == 0x10)) {
            FUN_5f001220(param_1,(&DAT_5f00a2a0)[iVar5 * 10]);
            return true;
          }
          FUN_5f001070(param_1,(&DAT_5f00a2a0)[iVar5 * 10]);
        }
        return (bool)('\x01' - (iVar2 == 0));
      }
    }
    puVar4 = puVar4 + 0x1a;
    iVar5 = iVar5 + 1;
    if (&UNK_5f00b19f < puVar4) {
      return false;
    }
  } while( true );
}

