/*
 * FUN_0040b715 at 0040b715
 * uint __cdecl FUN_0040b715(char * param_1, char * param_2)
 * Address ranges: 0040b715-0040b792
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_0040b715(char *param_1,char *param_2)

{
  char cVar1;
  void *this;
  uint uVar2;
  uint uVar3;
  void *this_00;
  void *this_01;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (pcVar4 = param_2, cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
  }
  pcVar5 = pcVar5 + -1;
  pcVar4 = pcVar4 + -1;
  if (param_1 <= pcVar5) {
    do {
      if (pcVar4 < param_2) break;
      this = (void *)(int)*pcVar5;
      uVar2 = FUN_0040c0a8(param_1,(uint)this);
      uVar3 = FUN_0040c0a8(this_00,(int)*pcVar4);
      if (uVar2 != uVar3) {
        uVar2 = FUN_0040c0a8(this,(int)*pcVar5);
        uVar3 = FUN_0040c0a8(this_01,(int)*pcVar4);
        return uVar2 - uVar3;
      }
      pcVar5 = pcVar5 + -1;
      pcVar4 = pcVar4 + -1;
    } while (param_1 <= pcVar5);
    if (param_1 <= pcVar5) {
      return 0xffffffff;
    }
  }
  return (uint)(param_2 <= pcVar4);
}

