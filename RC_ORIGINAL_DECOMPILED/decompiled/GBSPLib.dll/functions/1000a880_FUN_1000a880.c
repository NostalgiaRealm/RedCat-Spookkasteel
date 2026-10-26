/*
 * FUN_1000a880 at 1000a880
 * undefined FUN_1000a880(void)
 * Address ranges: 1000a880-1000a90c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000a880(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char local_400 [512];
  char local_200 [512];
  
  pcVar2 = local_200;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  pcVar2 = local_400;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar2 = 0;
    pcVar2 = (char *)((int)pcVar2 + 4);
  }
  _strncpy(local_200,param_1,0x200);
  _strncpy(local_400,param_2,0x200);
  FUN_100334c6(local_200);
  FUN_100334c6(local_400);
  iVar1 = FUN_10028100(local_200,local_400);
  return iVar1 != 0;
}

