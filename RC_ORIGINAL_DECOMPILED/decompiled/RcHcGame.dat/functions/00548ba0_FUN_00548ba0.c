/*
 * FUN_00548ba0 at 00548ba0
 * undefined FUN_00548ba0(void)
 * Address ranges: 00548ba0-00548c21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_00548ba0(int param_1,char *param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  char *_Buf;
  uint uVar2;
  char *_MaxCount;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((param_4 != 0) || (*(uint *)(param_1 + 8) < param_3)) {
    if ((param_3 < *(uint *)(param_1 + 8)) &&
       (uVar2 = *(uint *)(param_1 + 8) - param_3, param_4 <= uVar2)) {
      _MaxCount = (char *)(uVar2 + (1 - param_4));
      _Buf = (char *)(*(int *)(param_1 + 4) + param_3);
      while( true ) {
        pcVar1 = _memchr(_Buf,(int)*param_2,(size_t)_MaxCount);
        if (pcVar1 == (char *)0x0) break;
        bVar5 = true;
        uVar2 = param_4;
        pcVar3 = pcVar1;
        pcVar4 = param_2;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          bVar5 = *pcVar3 == *pcVar4;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          return (int)pcVar1 - *(int *)(param_1 + 4);
        }
        _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)pcVar1));
        _Buf = pcVar1 + 1;
      }
    }
    param_3 = 0xffffffff;
  }
  return param_3;
}

