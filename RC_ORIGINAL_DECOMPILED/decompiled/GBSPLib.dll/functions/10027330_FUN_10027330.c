/*
 * FUN_10027330 at 10027330
 * undefined FUN_10027330(void)
 * Address ranges: 10027330-10027423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027330(byte *param_1,undefined1 *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pbVar1 = param_1 + 1;
    pbVar5 = param_1 + 2;
    iVar3 = (uint)*param_1 * 0x4000;
    param_1 = param_1 + 3;
    iVar4 = (int)(iVar3 + (*pbVar5 - 0x7f) * -0x59ba + 0x2000) >> 0xe;
    iVar2 = (int)((*pbVar1 - 0x7f) * 0x7168 + 0x2000 + iVar3) >> 0xe;
    iVar3 = (int)((*pbVar5 - 0x7f) * 0x2db4 + (*pbVar1 - 0x7f) * -0x1606 + 0x2000 + iVar3) >> 0xe;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xff < iVar4) {
      iVar4 = 0xff;
    }
    *param_2 = (char)iVar4;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    param_2[1] = (char)iVar3;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    param_2[2] = (char)iVar2;
    param_2 = param_2 + 3;
  }
  return;
}

