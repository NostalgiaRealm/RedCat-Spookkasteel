/*
 * FUN_005bd3b0 at 005bd3b0
 * undefined FUN_005bd3b0(void)
 * Address ranges: 005bd3b0-005bd43e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005bd3b0(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_005cf3b0(~uVar3);
  if (pcVar2 == (char *)0x0) {
    FUN_005cf220(0x41,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x72,&DAT_006b3f70,0
                );
    return 0;
  }
  if (*param_1 != 0) {
    FUN_005cf400(*param_1);
    *param_1 = 0;
    _DAT_007203c0 = 0;
  }
  uVar3 = 0xffffffff;
  *param_1 = (int)pcVar2;
  do {
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return 1;
}

