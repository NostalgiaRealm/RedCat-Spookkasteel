/*
 * FUN_006053fb at 006053fb
 * undefined FUN_006053fb(void)
 * Address ranges: 006053fb-0060554f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_006053fb(char *param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  char local_24 [32];
  
  pcVar2 = param_1;
  pcVar6 = local_24;
  cVar3 = FUN_006069c8(param_2);
  if (cVar3 == '\0') {
    if (pcVar2[4] == '\0') {
      Peek();
    }
    sVar4 = FUN_0060a03a(0x2b);
    if (*(short *)(pcVar2 + 6) == sVar4) {
      local_24[0] = '+';
    }
    else {
      if (pcVar2[4] == '\0') {
        Peek();
      }
      sVar4 = FUN_0060a03a(0x2d);
      if (*(short *)(pcVar2 + 6) != sVar4) goto LAB_00605461;
      local_24[0] = '-';
    }
    pcVar6 = local_24 + 1;
    FUN_00605560();
  }
LAB_00605461:
  bVar1 = false;
  cVar3 = FUN_006069c8(param_2);
  if (cVar3 == '\0') {
    do {
      if (pcVar2[4] == '\0') {
        Peek();
      }
      sVar4 = FUN_0060a03a(0x30);
      if (*(short *)(pcVar2 + 6) != sVar4) break;
      bVar1 = true;
      FUN_00605560();
      cVar3 = FUN_006069c8(param_2);
    } while (cVar3 == '\0');
    if (bVar1) {
      *pcVar6 = '0';
      pcVar6 = pcVar6 + 1;
    }
  }
  while (cVar3 = FUN_006069c8(param_2), cVar3 == '\0') {
    if (pcVar2[4] == '\0') {
      Peek();
    }
    cVar3 = FUN_00600c15(*(undefined2 *)(pcVar2 + 6));
    *pcVar6 = cVar3;
    if ((cVar3 < '0') || ('9' < cVar3)) break;
    if (pcVar6 < local_24 + 0x1f) {
      pcVar6 = pcVar6 + 1;
    }
    bVar1 = true;
    FUN_00605560();
  }
  if (!bVar1) {
    pcVar6 = local_24;
  }
  *pcVar6 = '\0';
  DAT_0070ff98 = 0;
  iVar5 = FUN_0060ef5c(local_24,&param_1,10);
  cVar3 = FUN_006069c8(param_2);
  bVar7 = cVar3 != '\0';
  if ((((param_1 == local_24) || (DAT_0070ff98 != 0)) || (iVar5 < param_3)) || (param_4 < iVar5)) {
    bVar7 = bVar7 | 2;
  }
  else {
    *param_5 = iVar5;
  }
  return bVar7;
}

