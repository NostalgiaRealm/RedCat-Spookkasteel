/*
 * FUN_0061b941 at 0061b941
 * undefined FUN_0061b941(void)
 * Address ranges: 0061b941-0061ba11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061b941(uint param_1,void *param_2,size_t param_3)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  CHAR local_10c [260];
  LPSTR local_8;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    DVar2 = GetCurrentDirectoryA(0x104,local_10c);
  }
  else {
    iVar1 = FUN_0061ba12(param_1);
    if (iVar1 == 0) {
      DAT_0070ff98 = 0xd;
      DAT_0070ff9c = 0xf;
      return 0;
    }
    param_1 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar3 + '@'));
    DVar2 = GetFullPathNameA((LPCSTR)&param_1,0x104,local_10c,&local_8);
  }
  if ((DVar2 != 0) && (uVar3 = DVar2 + 1, uVar3 < 0x105)) {
    if (param_2 == (void *)0x0) {
      if ((int)uVar3 <= (int)param_3) {
        uVar3 = param_3;
      }
      pvVar4 = _malloc(uVar3);
      if (pvVar4 != (void *)0x0) {
LAB_0061b9fe:
        uVar5 = FUN_00611110(pvVar4,local_10c);
        return uVar5;
      }
      DAT_0070ff98 = 0xc;
    }
    else {
      pvVar4 = param_2;
      if ((int)uVar3 <= (int)param_3) goto LAB_0061b9fe;
      DAT_0070ff98 = 0x22;
    }
  }
  return 0;
}

