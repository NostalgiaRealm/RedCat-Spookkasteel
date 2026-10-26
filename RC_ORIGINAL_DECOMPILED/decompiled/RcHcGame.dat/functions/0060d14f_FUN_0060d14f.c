/*
 * FUN_0060d14f at 0060d14f
 * undefined FUN_0060d14f(void)
 * Address ranges: 0060d14f-0060d1cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * FUN_0060d14f(int param_1,int param_2)

{
  void *_Dst;
  LPVOID pvVar1;
  int iVar2;
  uint _Size;
  uint uVar3;
  
  _Size = param_1 * param_2;
  uVar3 = _Size;
  if (_Size < 0xffffffe1) {
    if (_Size == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
  }
  do {
    if (uVar3 < 0xffffffe1) {
      if ((_Size < DAT_006b2e34 || _Size - DAT_006b2e34 == 0) &&
         (_Dst = (void *)FUN_006170cc(_Size), _Dst != (void *)0x0)) {
        _memset(_Dst,0,_Size);
        return _Dst;
      }
      pvVar1 = HeapAlloc(DAT_00747ea0,8,uVar3);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
    }
    if (DAT_007101cc == 0) {
      return (void *)0x0;
    }
    iVar2 = FUN_0061ac91(uVar3);
  } while (iVar2 != 0);
  return (void *)0x0;
}

