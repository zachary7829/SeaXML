//Zachary Keffaber / zachary7829, 2021/11/29, SeaXML

#include <stdio.h>
#include <stdlib.h>
#include "seaxml.h"

int main(){
  printf("%s",getvalue("WFWorkflowActionIdentifier", 1));
  printf("\n");
  printf("%s",getvalue("WFWorkflowActionIdentifier", 2));
  return 0;
}