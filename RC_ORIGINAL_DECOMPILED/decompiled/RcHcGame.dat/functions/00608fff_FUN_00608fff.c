/*
 * FUN_00608fff at 00608fff
 * undefined FUN_00608fff(void)
 * Address ranges: 00608fff-00609133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_00608fff(char *param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char local_24 [32];
  
  pcVar2 = param_1;
  pcVar5 = local_24;
  cVar3 = FUN_00600aa5(param_2);
  if (cVar3 == '\0') {
    if (pcVar2[4] == '\0') {
      Peek();
    }
    if (pcVar2[5] == '+') {
      local_24[0] = '+';
    }
    else {
      if (pcVar2[4] == '\0') {
        Peek();
      }
      if (pcVar2[5] != '-') goto LAB_00609055;
      local_24[0] = '-';
    }
    pcVar5 = local_24 + 1;
    FUN_0060045f();
  }
LAB_00609055:
  bVar1 = false;
  cVar3 = FUN_00600aa5(param_2);
  if (cVar3 == '\0') {
    do {
      if (pcVar2[4] == '\0') {
        Peek();
      }
      if (pcVar2[5] != '0') break;
      bVar1 = true;
      FUN_0060045f();
      cVar3 = FUN_00600aa5(param_2);
    } while (cVar3 == '\0');
    if (bVar1) {
      *pcVar5 = '0';
      pcVar5 = pcVar5 + 1;
    }
  }
  while (cVar3 = FUN_00600aa5(param_2), cVar3 == '\0') {
    if (pcVar2[4] == '\0') {
      Peek();
    }
    cVar3 = pcVar2[5];
    *pcVar5 = cVar3;
    if ((cVar3 < '0') || ('9' < cVar3)) break;
    if (pcVar5 < local_24 + 0x1f) {
      pcVar5 = pcVar5 + 1;
    }
    bVar1 = true;
    FUN_0060045f();
  }
  if (!bVar1) {
    pcVar5 = local_24;
  }
  *pcVar5 = '\0';
  DAT_0070ff98 = 0;
  iVar4 = FUN_0060ef5c(local_24,&param_1,10);
  cVar3 = FUN_00600aa5(param_2);
  bVar6 = cVar3 != '\0';
  if ((((param_1 == local_24) || (DAT_0070ff98 != 0)) || (iVar4 < param_3)) || (param_4 < iVar4)) {
    bVar6 = bVar6 | 2;
  }
  else {
    *param_5 = iVar4;
  }
  return bVar6;
}

