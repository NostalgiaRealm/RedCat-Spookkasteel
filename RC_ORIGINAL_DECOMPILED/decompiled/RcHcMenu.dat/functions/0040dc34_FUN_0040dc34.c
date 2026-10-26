/*
 * FUN_0040dc34 at 0040dc34
 * char * __register FUN_0040dc34(byte * param_1, char param_2)
 * Address ranges: 0040dc34-0040dc73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_0040dc34(byte *param_1,char param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = FUN_0040a2d8((char *)param_1,param_2);
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    uVar2 = FUN_0040d854(param_1,(int)pcVar1 - (int)param_1);
    if ((char)uVar2 == '\0') break;
    if ((char)uVar2 == '\x01') {
      pcVar1 = pcVar1 + 1;
    }
    pcVar1 = FUN_0040a2d8(pcVar1 + 1,param_2);
  }
  return pcVar1;
}

