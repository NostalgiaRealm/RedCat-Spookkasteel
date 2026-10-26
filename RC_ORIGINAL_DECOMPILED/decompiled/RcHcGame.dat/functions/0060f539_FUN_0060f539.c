/*
 * FUN_0060f539 at 0060f539
 * undefined FUN_0060f539(void)
 * Address ranges: 0060f539-0060f5d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0060f539(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint *puVar3;
  byte *_Str;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  _Str = param_1;
  while( true ) {
    if (DAT_006b28bc < 2) {
      uVar1 = (byte)PTR_DAT_006b26b0[(uint)*_Str * 2] & 8;
    }
    else {
      uVar1 = FUN_0060e0ee(*_Str,8);
    }
    if (uVar1 == 0) break;
    _Str = _Str + 1;
  }
  uVar6 = 0;
  uVar5 = 0;
  sVar2 = _strlen((char *)_Str);
  puVar3 = (uint *)FUN_0061cc14(_Str,sVar2,uVar5,uVar6);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _Str + puVar3[1];
  }
  uVar1 = *puVar3;
  if ((uVar1 & 0x240) == 0) {
    if ((uVar1 & 0x81) == 0) {
      if ((uVar1 & 0x100) == 0) {
        return (float10)*(double *)(puVar3 + 4);
      }
      fVar4 = (float10)0;
    }
    else {
      fVar4 = (float10)_DAT_006b3bfc;
      if (*_Str == 0x2d) {
        fVar4 = -fVar4;
      }
    }
    DAT_0070ff98 = 0x22;
  }
  else {
    fVar4 = (float10)0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
  }
  return fVar4;
}

