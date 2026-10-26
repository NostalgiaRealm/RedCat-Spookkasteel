/*
 * FUN_0040dc0c at 0040dc0c
 * char * __register FUN_0040dc0c(byte * param_1, char param_2)
 * Address ranges: 0040dc0c-0040dc33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_0040dc0c(byte *param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = FUN_0040dc34(param_1,param_2);
  pcVar3 = pcVar2;
  if (param_2 != '\0') {
    while (pcVar1 = pcVar3, pcVar1 != (char *)0x0) {
      pcVar3 = FUN_0040dc34((byte *)(pcVar1 + 1),param_2);
      pcVar2 = pcVar1;
    }
  }
  return pcVar2;
}

